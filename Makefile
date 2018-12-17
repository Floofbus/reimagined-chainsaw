.PHONY: clean All

All:
	@echo "----------Building project:[ 29e - Debug ]----------"
	@cd "29e" && "$(MAKE)" -f  "29e.mk"
clean:
	@echo "----------Cleaning project:[ 29e - Debug ]----------"
	@cd "29e" && "$(MAKE)" -f  "29e.mk" clean
