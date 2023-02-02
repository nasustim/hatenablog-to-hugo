FROM ubuntu:latest

CMD mkdir /work
WORKDIR /work

RUN apt-get update && \
  apt-get install -y g++ cmake

COPY ./googletest /usr/local/src/googletest
RUN cd /usr/local/src/googletest && \
  mkdir build && \
  cd build && \
  cmake .. && \
  make && \
  make install 
