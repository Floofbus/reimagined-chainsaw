.PHONY: clean All

All:
	@echo "----------Building project:[ 13e - Debug ]----------"
	@cd "13e" && "$(MAKE)" -f  "13e.mk"
clean:
	@echo "----------Cleaning project:[ 13e - Debug ]----------"
	@cd "13e" && "$(MAKE)" -f  "13e.mk" clean
