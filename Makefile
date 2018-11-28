.PHONY: clean All

All:
	@echo "----------Building project:[ 9e - Debug ]----------"
	@cd "9e" && "$(MAKE)" -f  "9e.mk"
clean:
	@echo "----------Cleaning project:[ 9e - Debug ]----------"
	@cd "9e" && "$(MAKE)" -f  "9e.mk" clean
