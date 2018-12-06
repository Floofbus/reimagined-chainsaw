.PHONY: clean All

All:
	@echo "----------Building project:[ 18e - Debug ]----------"
	@cd "18e" && "$(MAKE)" -f  "18e.mk"
clean:
	@echo "----------Cleaning project:[ 18e - Debug ]----------"
	@cd "18e" && "$(MAKE)" -f  "18e.mk" clean
