.PHONY: clean All

All:
	@echo "----------Building project:[ 3e - Debug ]----------"
	@cd "3e" && "$(MAKE)" -f  "3e.mk"
clean:
	@echo "----------Cleaning project:[ 3e - Debug ]----------"
	@cd "3e" && "$(MAKE)" -f  "3e.mk" clean
