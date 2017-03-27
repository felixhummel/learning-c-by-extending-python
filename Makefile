foo: clean spam.so test

spam.so:
	python setup.py build \
		&& cp build/lib.linux-x86_64-3.5/spam.cpython-35m-x86_64-linux-gnu.so spam.so

test:
	python test.py

clean:
	rm -rf build/
	rm -f spam.so

