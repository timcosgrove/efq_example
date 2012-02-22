For the purposes of [a series of blog posts](http://treehouseagency.com/blog/tim-cosgrove/2012/02/16/entityfieldquery-let-drupal-do-heavy-lifting-pt-1) on [EntityFieldQuery](http://api.drupal.org/api/drupal/includes!entity.inc/class/EntityFieldQuery/7), I've created a simple module that demonstrates some uses of EntityFieldQuery.

Some quick notes about what the module contains: the module installs three node types, **efq_article**, **efq_page**, and **efq_photo**. These are very simple node types: **efq_article** and **efq_page** each contain a body field for text, while **efq_photo** contains a single image field. In addition, all three content types contain a US States field, which we'll be using to construct some example queries.

Additionally, the module defines a menu callback that uses EntityFieldQuery to generate a listing of these content types that is filterable by state and by node type arguments. It also defines a block which lists other content in the system that matches the state of a given node, if such content exists.

I recommend using [Devel](http://drupal.org/project/devel) content generate to quickly generate content for your examples, although you can of course create it manually if you like. For the purposes of my examples, I created 200 nodes using the following command: <code>drush genc --types="efq_page,efq_article,efq_photo" 200</code>.

When you uninstall this module, it will clean up after itself, removing all created content. I'm thinking of teaching this technique to my cats.