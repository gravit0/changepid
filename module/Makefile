obj-m +=main.o

KDIR =//lib/modules/`uname -r`/build/

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order
