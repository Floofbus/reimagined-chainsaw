.PHONY: clean All

All:
	@echo "----------Building project:[ 2e - Debug ]----------"
	@cd "2e" && "$(MAKE)" -f  "2e.mk"
clean:
	@echo "----------Cleaning project:[ 2e - Debug ]----------"
	@cd "2e" && "$(MAKE)" -f  "2e.mk" clean
