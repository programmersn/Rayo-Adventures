///////////////////////////////////////////////////////////////////////////////
/// \file ResourceId.h
/// \author Noua�m SOUIKI
/// \email souiki.nouaim@yahoo.fr
///
///////////////////////////////////////////////////////////////////////////////
#ifndef RESOURCE_ID_H
#define RESOURCE_ID_H

///////////////////////////////////////////////////////////////////////////////
/// \namespace engn.
/// \brief Classes and methods implementing the Engine Layer of the game.
///
///////////////////////////////////////////////////////////////////////////////
namespace engn
{
///////////////////////////////////////////////////////////////////////////////
/// \namespace rsc.
/// \brief Define resources structures and classes.
///
///////////////////////////////////////////////////////////////////////////////
namespace rsc
{
///////////////////////////////////////////////////////////////////////////////
/// \struct ResourceId
/// \brief Define resources identifiers, classed by resources types.
/// \todo Find a method to separate kinds of textures into induvidual enums.
///
///////////////////////////////////////////////////////////////////////////////
struct ResourceId
{
   enum class Texture {
      RayoIdle_1,
      CybronThree
   };

   enum class Font
   {

   };

   enum class Shader
   {
      Toon
   };
};

} // namespace rsc
} // namespace engn

#endif