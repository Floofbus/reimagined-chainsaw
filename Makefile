.PHONY: clean All

All:
	@echo "----------Building project:[ 11e - Debug ]----------"
	@cd "11e" && "$(MAKE)" -f  "11e.mk"
clean:
	@echo "----------Cleaning project:[ 11e - Debug ]----------"
	@cd "11e" && "$(MAKE)" -f  "11e.mk" clean
