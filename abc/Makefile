ABC001_050=abc001-050
ABC151_200=abc151-200

all:	_$(ABC001_050) _$(ABC151_200)

_$(ABC001_050):	
	make -C $(ABC001_050)

_$(ABC151_200):	
	make -C $(ABC151_200)

clean:
	make -C $(ABC001_050) clean
	make -C $(ABC151_200) clean
	