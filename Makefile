.PHONY: clean All

All:
	@echo "----------Building project:[ 23e - Debug ]----------"
	@cd "23e" && "$(MAKE)" -f  "23e.mk"
clean:
	@echo "----------Cleaning project:[ 23e - Debug ]----------"
	@cd "23e" && "$(MAKE)" -f  "23e.mk" clean
