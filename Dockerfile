FROM python:3-alpine

RUN apk add --no-cache gcc python3-dev musl-dev

RUN mkdir -p /usr/local/src/spam
ADD setup.py spammodule.c test.py /usr/local/src/spam/

WORKDIR /usr/local/src/spam
RUN python setup.py install

WORKDIR /
ADD test.py /

CMD python test.py
