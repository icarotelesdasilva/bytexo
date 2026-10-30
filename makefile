bytexo:
	
	mkdir -p bytexo
	gcc main/main.c processor/processer.c -o  bytexo/bytexo
	sudo cp bytexo/bytexo /usr/local/bin/

clean:
	rm -rf *.bin *.o bytexo/


.PHONY: clean all bytexo


