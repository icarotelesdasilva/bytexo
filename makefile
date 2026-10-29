bytexo:
	
	mkdir -p bytexo
	gcc main/main.c processor/processer.c -o  bytexo/bytexo


clean:
	rm -rf *.bin *.o bytexo/bytexo


.PHONY: clean all bytexo


