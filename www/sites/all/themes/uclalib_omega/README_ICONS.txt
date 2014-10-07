To add an icon:

1.  Go to http://icomoon.io/app/
2.  Import existing icon font:
    * Hamburger icon > Manage Projects > Import project.
    * Select file `selection.json` inside the theme's `icons` dir.
    * IcoMoon will add a new "Untitled Project 2" to the list.
3.  Click the "Load" link to the right of the new project to return to the
    selection interface. All the existing icons are loaded and pre-selected.
4.  Click the "Import Icons" button to browse your filesystem for new SVG(s)
    source icons to add. Multiple files may be selected and imported at once.
    If new icons are provided in a zip file, extract them to a temporary
    directory in some place other than the `image-sources` folder to easily
    select only the new files for import into IcoMoon.
5.  Note that new icons imported into IcoMoon are NOT selected, so click each
    new icon to add it to the icon-font.
6.  Export the icon font by clicking the "Font" button at the bottom, then
    click the "Download" button at the bottom of the next page.
7.  Remove contents of the `icons` dir in the theme, extract the downloaded zip
    file inside the `icons` dir.
8.  Edit JSON & CSS to replace underscores with dashes in icon names (see git
    history). Simplest way to avoid this step is to put dashes in all source
    SVG filenames instead of underscores.
9.  Check diff, make sure that no css/js has changes for pre-existing icons.
10. Fix permissions (chmod a+rx icons).
11. Edit uclalib_arch.module and add any new icon(s) in the
    uclalib_arch_icon_bundles function.
12. In the Icomoon App, click the "SVGs" button at the bottom, deselect
    "SVG-sprite" and click "Download".
13. Extract the contents of the resulting zip to the `images-source` dir.
14. Check diff again, commit everything if satisfied.
