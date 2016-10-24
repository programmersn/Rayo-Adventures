///////////////////////////////////////////////////////////////////////////////
/// \file Uncopyable.h
/// \author Noua�m SOUIKI
/// \email souiki.nouaim@yahoo.fr
///
///////////////////////////////////////////////////////////////////////////////
#ifndef UNCOPYABLE_H
#define UNCOPYABLE_H

///////////////////////////////////////////////////////////////////////////////
/// \namespace engn.
/// \brief The engine layer.
///
///////////////////////////////////////////////////////////////////////////////
namespace core
{

///////////////////////////////////////////////////////////////////////////////
/// \struct Uncopyable.
/// \brief Provide uncopyable-ness property for inherited classes.
///
///////////////////////////////////////////////////////////////////////////////
struct Uncopyable
{
   Uncopyable ()                                = default;
   virtual ~Uncopyable()                        = default;
   
   Uncopyable(Uncopyable const &)               = delete;
   Uncopyable & operator= (Uncopyable const &)  = delete;
   Uncopyable(Uncopyable const &&)              = delete;
   Uncopyable & operator= (Uncopyable const &&) = delete;
};

} // namespace core

#endif // UNCOPYABLE_H
