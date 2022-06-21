.. iclc documentation master file
   vim setting: set et ts=3 tw=80

iclc documentation
==================

This is the place for documenting finding/thoughts of **lc** and expecting
whatever has been done to be reviewed, hopefully, quickly pick up in the future.

Quick Start
-----------

The document is using *Sphinx* to build the output/result. So it is required to
install *Sphinx*. Here is the `installation guide
<https://www.sphinx-doc.org/en/master/usage/installation.html>`_ for installing
the *Sphinx*.

It may be needed to install *Sphinx* theme, Furo, if it's missing.

.. code-block:: console

   $ pip install furo

It is recommended to install *LaTeX*, though, it won't stop to build the
document that only impacts correctly to present/build math formula. It will take
some time and require around 7GB to install *LaTeX*. The detail information
about the `installation guide can be found here
<https://www.tug.org/texlive/quickinstall.html>`_.

Building the Document
---------------------

Once *Sphinx* is installed, we can use ``sphinx-build`` to build the document.
The syntax of ``sphinx-build`` is ``-b`` for the output document format and then
follow by the *document source directory* and *output document directory*.

Following is am example for building document from current directory a.k.a.
'*.*' and output to *_build* directory for the format of *html*.

.. code-block:: console

   $ sphinx-build -b html . _build

One can use ``make`` follow by the output format to build the document instead.
By default, the output directory is *_build*, which can be modified from the
*Makefile*.

.. code-block:: console

   $ make html

Once ``sphinx-build`` is done, we can find the *index.html* in the output
forlder. Voila! Enjoy the document!

Indices and Tables
------------------

.. toctree::
   :maxdepth: 1
   :caption: Contents:

   qs/index
   sol/index

:ref:`genindex`
