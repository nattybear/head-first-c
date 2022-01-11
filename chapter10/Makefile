open_url.o: open_url.c
	gcc -c open_url.c -o open_url.o

news_opener.o: news_opener.c
	gcc -c news_opener.c -o news_opener.o

news_opener: open_url.o news_opener.o
	gcc open_url.o news_opener.o -o news_opener
