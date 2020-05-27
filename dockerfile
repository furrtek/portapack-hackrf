FROM ubuntu:latest

# Set location to download ARM toolkit from.
# This will need to be changed over time or replaced with a static link to the latest release.
ENV ARMBINURL=https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2?revision=108bd959-44bd-4619-9c19-26187abf5225&la=en&hash=E788CE92E5DFD64B2A8C246BBA91A249CB8E2D2D \
    GIT_URL=https://github.com/furrtek/portapack-havoc.git \
    PATH=$PATH:/opt/build/armbin/bin

#Create volume /havoc/bin for compiled firmware binaries
VOLUME /havoc/bin
WORKDIR /havoc/src

# Fetch dependencies from APT
RUN apt-get update && \
	apt-get install -y git tar wget dfu-util cmake python3 python-pip && \
	apt-get -qy autoremove

RUN pip install pyyaml

# Grab the GNU ARM toolchain from arm.com
# Then extract contents to /opt/build/armbin/
RUN mkdir /opt/build && cd /opt/build && \
	wget -O gcc-arm-none-eabi $ARMBINURL && \
	mkdir armbin && \
	tar --strip=1 -xjvf gcc-arm-none-eabi -C armbin

RUN git init && \
    git remote add origin $GIT_URL && \
    git fetch origin --depth 1 && git checkout -b master origin/master && \
    git submodule update --init --recursive

CMD git pull && \
    mkdir build && cd build && \
    cmake .. && make firmware && \
    cp /havoc/src/build/firmware/portapack-h1-havoc.bin /havoc/bin
