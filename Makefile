.PHONY: clean All

All:
	@echo "----------Building project:[ 26e - Debug ]----------"
	@cd "26e" && "$(MAKE)" -f  "26e.mk"
clean:
	@echo "----------Cleaning project:[ 26e - Debug ]----------"
	@cd "26e" && "$(MAKE)" -f  "26e.mk" clean
