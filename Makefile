.PHONY: clean All

All:
	@echo "----------Building project:[ 12e - Debug ]----------"
	@cd "12e" && "$(MAKE)" -f  "12e.mk"
clean:
	@echo "----------Cleaning project:[ 12e - Debug ]----------"
	@cd "12e" && "$(MAKE)" -f  "12e.mk" clean
