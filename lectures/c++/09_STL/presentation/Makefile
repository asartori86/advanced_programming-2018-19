TARGET = stl_intro

all: compile clean

compile:
	pdflatex $(TARGET)
	pdflatex $(TARGET)

clean: 
	rm -f *.bbl *.log *.lot *.toc *.out *.blg *.aux *.lof *.nav *.snm *.vrb *~
	+$(MAKE) $@ -C tex_files

quick: 
	pdflatex $(TARGET)

open:
	xdg-open $(TARGET).pdf &

distclean: clean
	rm -f $(TARGET).pdf

.PHONY: all compile clean quick open distclean

