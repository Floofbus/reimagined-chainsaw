.PHONY: clean All

All:
	@echo "----------Building project:[ 21e - Debug ]----------"
	@cd "21e" && "$(MAKE)" -f  "21e.mk"
clean:
	@echo "----------Cleaning project:[ 21e - Debug ]----------"
	@cd "21e" && "$(MAKE)" -f  "21e.mk" clean
