compile: main.c 
	 gcc  main.c -o insertion

runSelection: selection
	  ./selection

run: bubble
	 ./bubble


clean: bubble
	 rm bubble
