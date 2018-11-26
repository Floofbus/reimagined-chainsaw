.PHONY: clean All

All:
	@echo "----------Building project:[ 6e - Debug ]----------"
	@cd "6e" && "$(MAKE)" -f  "6e.mk"
clean:
	@echo "----------Cleaning project:[ 6e - Debug ]----------"
	@cd "6e" && "$(MAKE)" -f  "6e.mk" clean
