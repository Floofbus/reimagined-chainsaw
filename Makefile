.PHONY: clean All

All:
	@echo "----------Building project:[ 27e - Debug ]----------"
	@cd "27e" && "$(MAKE)" -f  "27e.mk"
clean:
	@echo "----------Cleaning project:[ 27e - Debug ]----------"
	@cd "27e" && "$(MAKE)" -f  "27e.mk" clean
