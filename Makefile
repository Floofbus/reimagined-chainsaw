.PHONY: clean All

All:
	@echo "----------Building project:[ 14e - Debug ]----------"
	@cd "14e" && "$(MAKE)" -f  "14e.mk"
clean:
	@echo "----------Cleaning project:[ 14e - Debug ]----------"
	@cd "14e" && "$(MAKE)" -f  "14e.mk" clean
