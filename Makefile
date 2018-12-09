.PHONY: clean All

All:
	@echo "----------Building project:[ 22e - Debug ]----------"
	@cd "22e" && "$(MAKE)" -f  "22e.mk"
clean:
	@echo "----------Cleaning project:[ 22e - Debug ]----------"
	@cd "22e" && "$(MAKE)" -f  "22e.mk" clean
