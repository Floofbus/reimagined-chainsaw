.PHONY: clean All

All:
	@echo "----------Building project:[ 5e - Debug ]----------"
	@cd "5e" && "$(MAKE)" -f  "5e.mk"
clean:
	@echo "----------Cleaning project:[ 5e - Debug ]----------"
	@cd "5e" && "$(MAKE)" -f  "5e.mk" clean
