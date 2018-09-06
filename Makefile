# Simple Makefile to compile all the sample codes provided during the
# course of Advanced Programming

all:
	+$(MAKE) $@ -C lectures/c++/01_intro

clean: 
	+$(MAKE) $@ -C lectures/c++/01_intro
	@find . -type f -name '*~' -exec rm '{}' \;

format: 
	+$(MAKE) $@ -C lectures/c++/01_intro

.PHONY: all clean format
