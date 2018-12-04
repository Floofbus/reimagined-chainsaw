.PHONY: clean All

All:
	@echo "----------Building project:[ 16e - Debug ]----------"
	@cd "16e" && "$(MAKE)" -f  "16e.mk"
clean:
	@echo "----------Cleaning project:[ 16e - Debug ]----------"
	@cd "16e" && "$(MAKE)" -f  "16e.mk" clean
