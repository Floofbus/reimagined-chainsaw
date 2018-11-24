.PHONY: clean All

All:
	@echo "----------Building project:[ 4e - Debug ]----------"
	@cd "4e" && "$(MAKE)" -f  "4e.mk"
clean:
	@echo "----------Cleaning project:[ 4e - Debug ]----------"
	@cd "4e" && "$(MAKE)" -f  "4e.mk" clean
