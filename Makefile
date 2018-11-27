.PHONY: clean All

All:
	@echo "----------Building project:[ 8e - Debug ]----------"
	@cd "8e" && "$(MAKE)" -f  "8e.mk"
clean:
	@echo "----------Cleaning project:[ 8e - Debug ]----------"
	@cd "8e" && "$(MAKE)" -f  "8e.mk" clean
