NAME ?= OincBugxanDroid

VERSION ?= Ngt

DEVICE ?= woods

DATE := $(shell date +'%Y%m%d-%H%M')

ZIP := $(NAME)-$(VERSION)-$(DEVICE)-$(DATE).zip

EXCLUDE := Makefile README.md *.git* OincBugxanDroid-Ngt-woods*.zip *sha1

all: $(ZIP)

$(ZIP):
	@echo 
	@echo 
	@echo " I Z A Q K U L L  ||  D.E.V.S.T.U.D.G.H"
	@echo " ______________________________________"
	@rm -rf *.zip *.sha1 out_done
	@echo 
	@echo " Date : $(shell date +"%b-%d-%Y")"
	@sleep 3.0;
	@echo " Creating ZIP: $(ZIP)"
	@echo "      =====>>> ... "
	@zip -r9 "$@" . -x $(EXCLUDE)
	@echo "Generating SHA1..."
	@sha1sum "$@" > "$@.sha1"
	@cat "$@.sha1"
	@echo
	@echo "Zip Size :"
	@du -h "$(NAME)-"*.zip*
	@echo ""
	@echo "Done."

clean:
	@rm -vf "$(NAME)-"*.zip*
	@echo "Done."
	@sleep 5.0;
