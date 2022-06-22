146. LRU Cache
==============

Approach
--------

The question requires *O(1)* time complexity for ``get()`` and ``put()`` so it's
not applicable by using sequential container. We should use *hash map* in order
to achieve *O(1)* time complexity. However, *LRU* stores data in sequence and
update the sequence by accessing, ``get()``, and adding/updating, ``put()``, a
data that breaks the way *hash map* storing data. So we need another sequential
container to store the data sequence, which means two containers have to
coordinate together as shown in below :ref:`figure 1 <lru_graph_1>`.

.. graphviz::
   :caption: Figure 1
   :name: lru_graph_1

   digraph lru_graph_1 {
      rankdir=LR;
      fontname=monospace;
      subgraph cluster0 {
         node [shape=record, width=.1, height=.1, fontname=monospace];
         label="Hash Map";
         color="lightblue";
         hm [label="{key: 2| <v2> node 2 of the list} |
                    {key: 1| <v1> node 1 of the list} |
                    {<v4>...} |
                    {key: 3| <v3> node 3 of the list}"];
      }
      subgraph cluster1 {
         node [shape=record, width=.1, height=.1, fontname=monospace];
         label="List";
         color="lightgreen";
         it1 [label="{<k1> key: 1| value: 11}"];
         it2 [label="{<k2> key: 2| value: 22}"];
         it3 [label="{<k3> key: 3| value: 33}"];
         it4 [label="<k4> ...", color=none];
         it1 -> it2 -> it3 -> it4 [color=gray];
      }
      hm:v1 -> it1:k1;
      hm:v2 -> it2:k2;
      hm:v3 -> it3:k3;
      hm:v4 -> it4:k4;
   }

Solution
--------

c++
~~~

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
