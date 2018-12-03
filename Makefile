.PHONY: clean All

All:
	@echo "----------Building project:[ 15e - Debug ]----------"
	@cd "15e" && "$(MAKE)" -f  "15e.mk"
clean:
	@echo "----------Cleaning project:[ 15e - Debug ]----------"
	@cd "15e" && "$(MAKE)" -f  "15e.mk" clean
