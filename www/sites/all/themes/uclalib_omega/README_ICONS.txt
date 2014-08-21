To add an icon:

1. Go to http://icomoon.io/app/
2. Upload SVGs for *all* icons (See images-source directory for source images, if you are adding a new SVG, be sure to add it there too and commit.)
3. Download font
4. remove current icon dir, replace with downloaded font dir
5. Check diff, make sure that no css/js has changes for pre-existing icons.
6. Fix permissions (chmod a+rx icons)
7. Edit downloaded json + css to replace underscores with dashes in icon names. (see git history) Simplest way to get around having to do this is not to have hyphens or underscores in your filenames.
8. edit uclalib_arch.module and add any new icons in the uclalib_arch_icon_bundles function.
