foo: clean hello.so test

hello.so:
	python setup.py build \
		&& cp build/lib.linux-x86_64-3.5/hello.cpython-35m-x86_64-linux-gnu.so hello.so

test:
	python test.py

clean:
	rm -rf build/
	rm -f hello.so

