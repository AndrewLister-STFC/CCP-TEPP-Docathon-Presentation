# Documenting software workshop for CCP-TEPP

This repo is for the 2026 CCP-TEPP workshop on software documentation
and contains slides as well as a small example for use in demo's as part
of the talk.

## Slides

The slides are written using [Quarto](https://quarto.org/), a tool for
converting markdown to HTML presentations, and can be found in `Slides/slides.qmd`.

To build the slides, run

```
quarto render Slides/slides.qmd
```

The presentation will be created as a html document using revealjs.

## Example

A basic example can be found in `Demo/src/example.c`.
This is intended to be used to demonstrate the VSCode C/C++ extension.
Specifically, to demonstrate:

- Hover text documentation
- Auto generation of docstrings
- Auto formatting
- Running Doxygen

If the live demo goes wrong, there are branches that can be checked out
to show what the output should have been.

## Demos

Before running the demo, checkout the branch `no_docs`.

### Demo 1 (VSCode C/C++ extension)

Before running this demo, make sure to have the VSCode extension installed.

1. Open `Demo/src/example.c` in VSCode
2. Point out the documentation for `rms_error`
3. Type `rms_error` into the main function and hover over it to show the docs
4. Write a small function and type `///` before it to show auto generated docstrings
5. Type `alt + shift + f` to tidy up any formatting

An example code for step 4 might be

```c
double times2(double number)
{
    return number*2;
}
```

### Demo 2 (Running Doxygen)

Before running this demo make sure you have Doxygen installed by checking
for the `doxygen` command.

1. Create the doxygen config `doxygen -g`
2. Edit the config:
   - Change the PROJECT_NAME
   - Change the GENERATE_LATEX
   - Change INPUT to include `src`
3. Run doxygen `doxygen`
4. Highlight warning that main is undocumented
5. Show docs by opening the `html/index.html` file in a browser

The expected state of the repo after this is in the branch `with_doxygen`

### Demo 3 (Running Sphinx)

Before running this demo make sure you have Sphinx installed by checking
for the `sphinx-quickstart` command.

1. Use the wizard to initialise `sphinx-quickstart`
2. Add a `details.rst` with some lorem ipsum
3. Edit the `index.rst` file to include the new file
4. Build docs with `make html`
5. Show docs by opening the `build/html/index.html` file in a browser

The expected state of the repo after this is in the branch `with_sphinx`
