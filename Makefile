all: format notebook.tex docker
pdf: notepdf

format:
	python3 Notebook/scripts/format/format-algorithms.py --path "${CURDIR}/Notebook/algorithms"

notebook.tex: format
	python3 Notebook/scripts/notebook/gen.py \
	--path "${CURDIR}/Notebook/algorithms" \
	--confpath "${CURDIR}/Notebook/settings-and-macros"

notepdf: notebook.tex
	pdflatex -interaction=nonstopmode -halt-on-error notebook.tex
	pdflatex -interaction=nonstopmode -halt-on-error notebook.tex

docker:
	python3 Notebook/scripts/docker/cleanup.py