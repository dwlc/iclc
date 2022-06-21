146. LRU Cache
==============

.. literalinclude:: ../src/146_lru_cache.cpp
   :caption: Code of LRU Cache
   :name: 146_lru_cache_sol
   :language: cpp
   :linenos:

.. note::

   It may be confused/forgot the sequence of parameters of ``std::list:splice``.

Complexity
----------

* Time: *O(1)* for ``get()`` and ``put()``.
* Space: *O(capacity)*
