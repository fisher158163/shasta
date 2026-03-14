# Shasta

Core Animation archive (`.caar`) and bundle (`.ca`) player.

| ![Shasta Demo](demo.webp) |
| :-------------------------: |

Featuring amazing QuickLook support!

| <img src="demo_ql.webp" alt="QL Demo" width="400"/> |
| :----------------------: |

## Download

Visit [releases](https://github.com/claration/Shasta/releases) and get the latest `.zip`.

## What are .caar files?

`.caar` files are Core Animation Archive files. They consist of core animation layers that are archived using `NSKeyedArchiver` to be later used as vector images in UI elements (especially when there are animations involved).

## What are .ca files?

Packages with the `.ca` extension are CAML (Core Animation Markup Language) bundles, they contain Core Animation trees encoded as XML and associated assets required by the encoded layer tree.

## Acknowledgements
- [CAARPlayer](https://github.com/insidegui/CAARPlayer) – `CAPackage` headers.
