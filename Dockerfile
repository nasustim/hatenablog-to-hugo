FROM ubuntu:latest

CMD mkdir /work
WORKDIR /work

RUN apt-get update && \
  apt-get install -y g++
