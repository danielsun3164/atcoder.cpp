ABC=abc
APG4B=apg4b
OTHER=other
PRACTICE=practice

all:	_$(ABC) _$(APG4B) _$(OTHER) _$(PRACTICE)

_$(ABC):
	make -C $(ABC)

_$(APG4B):
	make -C $(APG4B)

_$(OTHER):
	make -C $(OTHER)

_$(PRACTICE):
	make -C $(PRACTICE)

clean:
	make -C $(ABC) clean
	make -C $(APG4B) clean
	make -C $(OTHER) clean
	make -C $(PRACTICE) clean

