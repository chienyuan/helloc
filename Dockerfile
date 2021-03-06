FROM gcc as builder
RUN mkdir /build 
ADD . /build/
WORKDIR /build 
RUN g++ -o hello --static  hello.cpp
#RUN CGO_ENABLED=0 GOOS=linux go build -a -installsuffix cgo -ldflags '-extldflags "-static"' -o hello  .
FROM scratch
COPY --from=builder /build/hello /app/
WORKDIR /app
CMD ["./hello"]
