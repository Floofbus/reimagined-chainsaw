.PHONY: clean All

All:
	@echo "----------Building project:[ 19e - Debug ]----------"
	@cd "19e" && "$(MAKE)" -f  "19e.mk"
clean:
	@echo "----------Cleaning project:[ 19e - Debug ]----------"
	@cd "19e" && "$(MAKE)" -f  "19e.mk" clean
