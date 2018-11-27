.PHONY: clean All

All:
	@echo "----------Building project:[ 7e - Debug ]----------"
	@cd "7e" && "$(MAKE)" -f  "7e.mk"
clean:
	@echo "----------Cleaning project:[ 7e - Debug ]----------"
	@cd "7e" && "$(MAKE)" -f  "7e.mk" clean
