.PHONY: clean All

All:
	@echo "----------Building project:[ 28e - Debug ]----------"
	@cd "28e" && "$(MAKE)" -f  "28e.mk"
clean:
	@echo "----------Cleaning project:[ 28e - Debug ]----------"
	@cd "28e" && "$(MAKE)" -f  "28e.mk" clean
