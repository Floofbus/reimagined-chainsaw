.PHONY: clean All

All:
	@echo "----------Building project:[ 25e - Debug ]----------"
	@cd "25e" && "$(MAKE)" -f  "25e.mk"
clean:
	@echo "----------Cleaning project:[ 25e - Debug ]----------"
	@cd "25e" && "$(MAKE)" -f  "25e.mk" clean
