procbar:ProBar.c Main.c
	gcc Main.c ProBar.c -o procbar

.PHONY:clean
clean:
	rm -f procbar
