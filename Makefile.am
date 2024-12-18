AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = my_program
my_program_SOURCES = main.c func.c header.h

# Define files to be cleaned
CLEANFILES = my_program

# Define additional files and directories to be cleaned
DISTCLEANFILES = Makefile.in configure config.log config.status aclocal.m4 autom4te.cache compile depcomp install-sh missing .deps Makefile 

# Custom clean target
clean-local:
	rm -rf $(DISTCLEANFILES)

# Custom uninstall target
uninstall-local:
	rm -f $(bindir)/my_program

# Custom clean-all target
clean-all: clean distclean uninstall
	rm -rf $(DISTCLEANFILES) $(bindir)/my_program
